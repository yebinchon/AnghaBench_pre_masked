
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {scalar_t__ inversion; } ;
struct TYPE_6__ {int (* get_if_frequency ) (struct dvb_frontend*,int*) ;} ;
struct TYPE_7__ {TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; } ;
struct si2165_state {TYPE_4__ config; TYPE_1__* client; struct dvb_frontend fe; } ;
typedef int s32 ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct si2165_state*) ;
 int FUNC_3 (struct si2165_state*,int ,int) ;
 int FUNC_4 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_5(struct si2165_state *VAR_2)
{
 struct dvb_frontend *VAR_3 = &VAR_2->fe;
 u64 VAR_4;
 s32 VAR_5 = 0;
 u32 VAR_6 = FUNC_2(VAR_2);
 u32 VAR_7 = 0;

 if (!VAR_3->ops.tuner_ops.get_if_frequency) {
  FUNC_0(&VAR_2->client->dev,
   "Error: get_if_frequency() not defined at tuner. Can't work without it!\n");
  return -VAR_0;
 }

 if (!VAR_6)
  return -VAR_0;

 VAR_3->ops.tuner_ops.get_if_frequency(VAR_3, &VAR_7);
 VAR_4 = VAR_7;
 VAR_4 <<= 29;

 FUNC_1(VAR_4, VAR_6);
 VAR_5 = (s32)VAR_4;

 if (VAR_2->config.inversion)
  VAR_5 = -VAR_5;

 VAR_5 = VAR_5 & 0x1fffffff;


 return FUNC_3(VAR_2, VAR_1, VAR_5);
}
