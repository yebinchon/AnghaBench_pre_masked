
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int kvm_t ;
struct TYPE_2__ {char const* n_name; int n_value; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,void*,size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char const*,void*,size_t*,int *,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*,unsigned long,...) ;

__attribute__((used)) static int
FUNC_5(kvm_t *VAR_1, const char *VAR_2, int VAR_3, void *VAR_4, size_t VAR_5)
{
 if (VAR_1 != ((void*)0)) {
  ssize_t VAR_6;

  VAR_6 = FUNC_1(VAR_1, VAR_0[VAR_3].n_value, VAR_4, VAR_5);

  if (VAR_6 < 0) {
   FUNC_4("kvm_read(%s): %s", VAR_0[VAR_3].n_name,
       FUNC_0(VAR_1));
   return (1);
  } else if ((size_t)VAR_6 != VAR_5) {
   FUNC_4("kvm_read(%s): expected %zu bytes, got %zd bytes",
         VAR_0[VAR_3].n_name, VAR_5, VAR_6);
   return (1);
  }
 } else {
  size_t VAR_7 = VAR_5;

  if (FUNC_2(VAR_2, VAR_4, &VAR_7, ((void*)0), 0) == -1) {
   FUNC_3("sysctl(%s...) failed", VAR_2);
   return (1);
  }
  if (VAR_7 != VAR_5) {
   FUNC_4("sysctl(%s...): expected %lu, got %lu", VAR_2,
         (unsigned long)VAR_5, (unsigned long)VAR_7);
   return (1);
  }
 }
 return (0);
}
