
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_entry {int size; int flags; } ;
typedef int off_t ;
typedef int int32_t ;
typedef int daddr_t ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct partition_entry* FUNC_2 (int ,char const*) ;
 struct partition_entry* FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(int32_t VAR_2, const char *VAR_3, off_t VAR_4)
{
 struct partition_entry *VAR_5;
 daddr_t VAR_6;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_3[0] != '\0');
 if (VAR_3 == ((void*)0) || VAR_3[0] == '\0')
  return;

 FUNC_0("ANALYZE chunk %s", VAR_3);

 if ((VAR_5 = FUNC_3(VAR_3)) == ((void*)0))
  if ((VAR_5 = FUNC_2(VAR_2,
      VAR_3)) == ((void*)0))
   return;

 VAR_5->flags |= VAR_0;


 VAR_6 = VAR_4 / 1024;
 VAR_5->size = (VAR_6 > (off_t)VAR_1 ? VAR_1 : VAR_6);
}
