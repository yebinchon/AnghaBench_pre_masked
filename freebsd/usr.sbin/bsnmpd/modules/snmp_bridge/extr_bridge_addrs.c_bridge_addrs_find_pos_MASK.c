
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tp_entry {scalar_t__ sysindex; } ;
struct tp_entries {int dummy; } ;


 struct tp_entry* FUNC_0 (struct tp_entries*) ;
 struct tp_entry* FUNC_1 (struct tp_entries*,int ) ;
 struct tp_entry* FUNC_2 (struct tp_entry*,int ) ;
 struct tp_entry* FUNC_3 (struct tp_entry*,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct tp_entry *
FUNC_5(struct tp_entries *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;
 struct tp_entry *VAR_5;

 if ((VAR_5 = FUNC_0(VAR_2)) == ((void*)0) ||
     FUNC_4(VAR_3, VAR_5->sysindex) < 0)
  return (((void*)0));

 VAR_4 = VAR_5->sysindex;

 for (VAR_5 = FUNC_2(VAR_5, VAR_0); VAR_5 != ((void*)0); VAR_5 = FUNC_2(VAR_5, VAR_0)) {

  if (VAR_5->sysindex != VAR_4) {
   if (FUNC_4(VAR_3, VAR_5->sysindex) < 0)
    return (FUNC_3(VAR_5, VAR_1, VAR_0));
   else
    VAR_4 = VAR_5->sysindex;
  }
 }

 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_1(VAR_2, VAR_1);

 return (VAR_5);
}
