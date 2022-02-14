
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvo_entry {int pvo_vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int*,int) ;
 int FUNC_1 (struct pvo_entry*,int) ;
 struct pvo_entry* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int,int,int) ;
 struct pvo_entry* FUNC_3 (int ,int) ;

__attribute__((used)) static struct pvo_entry *
FUNC_4(int VAR_8)
{
 struct pvo_entry *VAR_9;

 if (!VAR_6 || VAR_8) {
  if (VAR_4 >= VAR_5) {
   FUNC_2("moea64_enter: bpvo pool exhausted, %d, %d, %zd",
         VAR_4, VAR_5,
         VAR_5 * sizeof(struct pvo_entry));
  }
  VAR_9 = &VAR_3[
      FUNC_0(&VAR_4, 1)];
  FUNC_1(VAR_9, sizeof(*VAR_9));
  VAR_9->pvo_vaddr = VAR_2;
 } else
  VAR_9 = FUNC_3(VAR_7, VAR_0 | VAR_1);

 return (VAR_9);
}
