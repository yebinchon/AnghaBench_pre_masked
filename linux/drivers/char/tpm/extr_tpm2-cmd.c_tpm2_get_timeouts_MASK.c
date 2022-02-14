
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int flags; void** duration; void* timeout_d; void* timeout_c; void* timeout_b; void* timeout_a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_0 (int ) ;

int FUNC_1(struct tpm_chip *VAR_13)
{

 VAR_13->timeout_a = FUNC_0(VAR_4);
 VAR_13->timeout_b = FUNC_0(VAR_5);
 VAR_13->timeout_c = FUNC_0(VAR_6);
 VAR_13->timeout_d = FUNC_0(VAR_7);


 VAR_13->duration[VAR_12] = FUNC_0(VAR_3);
 VAR_13->duration[VAR_11] = FUNC_0(VAR_2);
 VAR_13->duration[VAR_9] = FUNC_0(VAR_0);


 VAR_13->duration[VAR_10] =
  FUNC_0(VAR_1);

 VAR_13->flags |= VAR_8;

 return 0;
}
