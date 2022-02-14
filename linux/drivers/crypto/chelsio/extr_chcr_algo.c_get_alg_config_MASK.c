
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct algo_param {int result_size; int auth_mode; void* mk_size; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct algo_param *VAR_9,
     unsigned int VAR_10)
{
 switch (VAR_10) {
 case 132:
  VAR_9->mk_size = VAR_0;
  VAR_9->auth_mode = VAR_3;
  VAR_9->result_size = 132;
  break;
 case 131:
  VAR_9->mk_size = VAR_1;
  VAR_9->auth_mode = VAR_4;
  VAR_9->result_size = 130;
  break;
 case 130:
  VAR_9->mk_size = VAR_1;
  VAR_9->auth_mode = VAR_5;
  VAR_9->result_size = 130;
  break;
 case 129:
  VAR_9->mk_size = VAR_2;
  VAR_9->auth_mode = VAR_6;
  VAR_9->result_size = 128;
  break;
 case 128:
  VAR_9->mk_size = VAR_2;
  VAR_9->auth_mode = VAR_7;
  VAR_9->result_size = 128;
  break;
 default:
  FUNC_0("chcr : ERROR, unsupported digest size\n");
  return -VAR_8;
 }
 return 0;
}
