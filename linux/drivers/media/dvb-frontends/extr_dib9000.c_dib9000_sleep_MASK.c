
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int demod_lock; TYPE_2__** fe; } ;
struct TYPE_3__ {int (* sleep ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dib9000_state*,int ,int *,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3)
{
 struct dib9000_state *VAR_4 = VAR_3->demodulator_priv;
 u8 VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(&VAR_4->demod_lock) < 0) {
  FUNC_1("could not get the lock\n");
  return -VAR_0;
 }
 for (VAR_5 = 1; (VAR_5 < VAR_1) && (VAR_4->fe[VAR_5] != ((void*)0)); VAR_5++) {
  VAR_6 = VAR_4->fe[VAR_5]->ops.sleep(VAR_4->fe[VAR_5]);
  if (VAR_6 < 0)
   goto error;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_2, ((void*)0), 0);

error:
 FUNC_3(&VAR_4->demod_lock);
 return VAR_6;
}
