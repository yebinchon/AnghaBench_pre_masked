
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct user_desc {short entry_number; } ;
struct TYPE_4__ {struct ldt_entry** pages; struct ldt_entry* entries; } ;
struct TYPE_5__ {int entry_count; int lock; TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ ldt; } ;
struct mm_context {TYPE_3__ arch; int id; } ;
struct ldt_entry {int dummy; } ;
typedef int desc ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int) ;
 short* VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct ldt_entry*,struct ldt_entry*,int) ;
 int FUNC_3 (struct user_desc*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (int *,int,struct user_desc*,void**,int) ;

long FUNC_8(struct mm_context *VAR_7, struct mm_context *VAR_8)
{
 struct user_desc VAR_9;
 short * VAR_10;
 int VAR_11;
 long VAR_12, VAR_13=0;
 void *VAR_14 = ((void*)0);


 FUNC_4(&VAR_7->arch.ldt.lock);

 if (!VAR_8) {
  FUNC_3(&VAR_9, 0, sizeof(VAR_9));





  FUNC_1();
  for (VAR_10=VAR_6; *VAR_10 != -1; VAR_10++) {
   VAR_9.entry_number = *VAR_10;
   VAR_13 = FUNC_7(&VAR_7->id, 1, &VAR_9,
           &VAR_14, *(VAR_10 + 1) == -1);
   if (VAR_13)
    break;
  }
  VAR_7->arch.ldt.entry_count = 0;

  goto out;
 }







 FUNC_5(&VAR_8->arch.ldt.lock);
 if (VAR_8->arch.ldt.entry_count <= VAR_2)
  FUNC_2(VAR_7->arch.ldt.u.entries, VAR_8->arch.ldt.u.entries,
         sizeof(VAR_7->arch.ldt.u.entries));
 else {
  VAR_11 = VAR_8->arch.ldt.entry_count / VAR_3;
  while (VAR_11-->0) {
   VAR_12 = FUNC_0(VAR_1|VAR_5);
   if (!VAR_12) {
    VAR_13 = -VAR_0;
    break;
   }
   VAR_7->arch.ldt.u.pages[VAR_11] =
    (struct ldt_entry *) VAR_12;
   FUNC_2(VAR_7->arch.ldt.u.pages[VAR_11],
          VAR_8->arch.ldt.u.pages[VAR_11], VAR_4);
  }
 }
 VAR_7->arch.ldt.entry_count = VAR_8->arch.ldt.entry_count;
 FUNC_6(&VAR_8->arch.ldt.lock);

    out:
 return VAR_13;
}
