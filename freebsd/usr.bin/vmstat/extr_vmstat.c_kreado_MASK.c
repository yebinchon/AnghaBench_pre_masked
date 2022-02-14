
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ n_type; scalar_t__ n_value; char* n_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,void*,size_t) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, void *VAR_3, size_t VAR_4, size_t VAR_5)
{
 const char *VAR_6;

 if (VAR_1[VAR_2].n_type == 0 || VAR_1[VAR_2].n_value == 0) {
  VAR_6 = VAR_1[VAR_2].n_name;
  if (*VAR_6 == '_')
   ++VAR_6;
  FUNC_2(1, "symbol %s not defined", VAR_6);
 }
 if ((size_t)FUNC_1(VAR_0, VAR_1[VAR_2].n_value + VAR_5, VAR_3,
     VAR_4) != VAR_4) {
  VAR_6 = VAR_1[VAR_2].n_name;
  if (*VAR_6 == '_')
   ++VAR_6;
  FUNC_2(1, "%s: %s", VAR_6, FUNC_0(VAR_0));
 }
}
