
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xf_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 TYPE_1__* FUNC_2 (size_t) ;
 size_t VAR_2 ;
 TYPE_1__* FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (char*,TYPE_1__*,size_t*,int ,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
 size_t VAR_4, VAR_5;

 VAR_5 = VAR_4 = sizeof(*VAR_3);
 if ((VAR_3 = FUNC_2(VAR_4)) == ((void*)0))
  FUNC_0(1, "malloc()");
 while (FUNC_4("kern.file", VAR_3, &VAR_4, 0, 0) == -1) {
  if (VAR_1 != VAR_0 || VAR_4 != VAR_5)
   FUNC_0(1, "sysctlbyname()");
  VAR_5 = VAR_4 *= 2;
  if ((VAR_3 = FUNC_3(VAR_3, VAR_4)) == ((void*)0))
   FUNC_0(1, "realloc()");
 }
 if (VAR_4 > 0 && VAR_3->xf_size != sizeof(*VAR_3))
  FUNC_1(1, "struct xfile size mismatch");
 VAR_2 = VAR_4 / sizeof(*VAR_3);
}
