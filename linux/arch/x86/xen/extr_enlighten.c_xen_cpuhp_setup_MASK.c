
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int (*) (unsigned int),int (*) (unsigned int)) ;
 int FUNC_2 (unsigned int) ;

int FUNC_3(int (*VAR_2)(unsigned int),
      int (*VAR_3)(unsigned int))
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1,
           "x86/xen/guest:prepare",
           VAR_2, VAR_3);
 if (VAR_4 >= 0) {
  VAR_4 = FUNC_1(VAR_0,
            "x86/xen/guest:online",
            FUNC_2, ((void*)0));
  if (VAR_4 < 0)
   FUNC_0(VAR_1);
 }

 return VAR_4 >= 0 ? 0 : VAR_4;
}
