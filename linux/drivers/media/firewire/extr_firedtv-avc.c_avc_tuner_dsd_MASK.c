
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firedtv {int subunit; int type; int avc_mutex; int avc_data_length; scalar_t__ avc_data; } ;
struct dtv_frontend_properties {int dummy; } ;
struct avc_command_frame {int subunit; int ctype; } ;
struct TYPE_2__ {int * operand; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;




 int FUNC_2 (struct firedtv*,struct dtv_frontend_properties*) ;
 int FUNC_3 (struct firedtv*,struct dtv_frontend_properties*) ;
 int FUNC_4 (struct firedtv*,struct dtv_frontend_properties*) ;
 int FUNC_5 (struct firedtv*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct avc_command_frame*,int) ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;

int FUNC_10(struct firedtv *VAR_4,
    struct dtv_frontend_properties *VAR_5)
{
 struct avc_command_frame *VAR_6 = (void *)VAR_4->avc_data;
 int VAR_7, VAR_8;

 FUNC_7(&VAR_4->avc_mutex);

 VAR_6->ctype = VAR_0;
 VAR_6->subunit = VAR_1 | VAR_4->subunit;

 switch (VAR_4->type) {
 case 130:
 case 129: VAR_7 = FUNC_4(VAR_4, VAR_5); break;
 case 131: VAR_7 = FUNC_2(VAR_4, VAR_5); break;
 case 128: VAR_7 = FUNC_3(VAR_4, VAR_5); break;
 default:
  FUNC_1();
 }
 FUNC_9(VAR_6, VAR_7);

 VAR_4->avc_data_length = FUNC_0(3 + VAR_7, 4);
 VAR_8 = FUNC_5(VAR_4);
 FUNC_8(&VAR_4->avc_mutex);

 if (VAR_8 == 0)
  FUNC_6(500);

 return VAR_8;
}
