
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct cyapa {scalar_t__ state; scalar_t__ gen; void** status; scalar_t__ smbus; TYPE_1__* client; } ;
struct TYPE_6__ {int (* state_parse ) (struct cyapa*,void**,int) ;} ;
struct TYPE_5__ {int (* state_parse ) (struct cyapa*,void**,int) ;} ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 TYPE_3__ VAR_15 ;
 TYPE_2__ VAR_16 ;
 int FUNC_0 (struct cyapa*,int ,int,void**) ;
 int FUNC_1 (struct cyapa*,int ,int,void**) ;
 int FUNC_2 (struct cyapa*,int ,int,void**) ;
 int FUNC_3 (struct cyapa*,void**,int) ;
 int FUNC_4 (struct cyapa*,int ,void**) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct cyapa*,void**,int) ;
 int FUNC_7 (struct cyapa*,void**,int) ;

__attribute__((used)) static int FUNC_8(struct cyapa *VAR_17)
{
 u8 VAR_18[VAR_1];
 u8 VAR_19[32];

 bool VAR_20 = ((VAR_17->client->addr & 0x0001) == 0);
 bool VAR_21 = 0;
 int VAR_22 = 2;
 int VAR_23;

 VAR_17->state = VAR_8;







 VAR_23 = FUNC_1(VAR_17, VAR_0, VAR_1,
           VAR_18);






 if (VAR_17->smbus && (VAR_23 == -VAR_11 || VAR_23 == -VAR_10)) {
  if (!VAR_20)
   VAR_23 = FUNC_4(VAR_17,
     VAR_2, VAR_18);
  VAR_21 = 1;
 }

 if (VAR_23 != VAR_1)
  goto error;




 do {
  VAR_17->status[VAR_14] = VAR_18[VAR_14];
  VAR_17->status[VAR_13] = VAR_18[VAR_13];
  VAR_17->status[VAR_12] = VAR_18[VAR_12];

  if (VAR_17->gen == VAR_6 ||
    VAR_17->gen == VAR_3) {
   VAR_23 = VAR_15.state_parse(VAR_17,
     VAR_18, VAR_1);
   if (!VAR_23)
    goto out_detected;
  }
  if (VAR_17->gen == VAR_6 ||
    VAR_17->gen == VAR_5 ||
    VAR_17->gen == VAR_4) {
   VAR_23 = FUNC_3(VAR_17,
     VAR_18, VAR_1);
   if (!VAR_23)
    goto out_detected;
  }

  if ((VAR_17->gen == VAR_6 ||
    VAR_17->gen == VAR_4) &&
   !VAR_21 && VAR_20) {
   VAR_23 = VAR_16.state_parse(VAR_17,
     VAR_18, VAR_1);
   if (!VAR_23)
    goto out_detected;
  }





  if (!VAR_21) {
   VAR_19[0] = 0x00;
   VAR_19[1] = 0x00;
   VAR_23 = FUNC_2(VAR_17, 0, 2, VAR_19);
   if (VAR_23)
    goto error;

   FUNC_5(50);

   VAR_23 = FUNC_0(VAR_17, VAR_0,
     VAR_1, VAR_18);
   if (VAR_23)
    goto error;
  }
 } while (--VAR_22 > 0 && !VAR_21);

 goto error;

out_detected:
 if (VAR_17->state <= VAR_7)
  return -VAR_9;
 return 0;

error:
 return (VAR_23 < 0) ? VAR_23 : -VAR_9;
}
