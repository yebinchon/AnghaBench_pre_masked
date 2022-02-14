
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msu_buffer_entry {int entry; struct module* owner; struct msu_buffer const* mbuf; } ;
struct msu_buffer {int name; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct msu_buffer_entry*) ;
 struct msu_buffer_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(const struct msu_buffer *VAR_5,
     struct module *VAR_6)
{
 struct msu_buffer_entry *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(&VAR_4);
 if (FUNC_0(VAR_5->name)) {
  VAR_8 = -VAR_0;
  FUNC_1(VAR_7);
  goto unlock;
 }

 VAR_7->mbuf = VAR_5;
 VAR_7->owner = VAR_6;
 FUNC_3(&VAR_7->entry, &VAR_3);
unlock:
 FUNC_5(&VAR_4);

 return VAR_8;
}
