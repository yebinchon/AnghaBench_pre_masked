
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_notify {unsigned long nr_pages; int start_pfn; } ;
struct cmm_page_array {int index; unsigned long* page; struct cmm_page_array* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,...) ;
 int VAR_7 ;
 struct cmm_page_array* VAR_8 ;
 int FUNC_3 (unsigned long) ;
 int VAR_9 ;
 int FUNC_4 (struct cmm_page_array*,struct cmm_page_array*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(void *VAR_10)
{
 struct memory_notify *VAR_11 = VAR_10;
 unsigned long VAR_12 = (unsigned long)FUNC_5(VAR_11->start_pfn);
 unsigned long VAR_13 = VAR_12 + (VAR_11->nr_pages << VAR_2);
 struct cmm_page_array *VAR_14, *VAR_15, *VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18 = 0;

 FUNC_2("Memory going offline, searching 0x%lx (%ld pages).\n",
   VAR_12, VAR_11->nr_pages);
 FUNC_7(&VAR_7);


 VAR_15 = VAR_14 = VAR_8;
 while (VAR_14) {
  for (VAR_17 = (VAR_14->index - 1); (VAR_17 + 1) > 0; VAR_17--) {
   if ((VAR_14->page[VAR_17] < VAR_12) ||
       (VAR_14->page[VAR_17] >= VAR_13))
    continue;

   FUNC_6(FUNC_1(VAR_14->page[VAR_17]));
   FUNC_3(VAR_14->page[VAR_17]);
   VAR_18++;
   VAR_9--;
   FUNC_9();
   VAR_14->page[VAR_17] = VAR_15->page[--VAR_15->index];
   if (VAR_15->index == 0) {
    if (VAR_14 == VAR_15)
     VAR_14 = VAR_15->next;
    VAR_15 = VAR_15->next;
    FUNC_3((unsigned long)VAR_8);
    VAR_8 = VAR_15;
   }
  }
  VAR_14 = VAR_14->next;
 }


 VAR_15 = ((void*)0);
 VAR_14 = VAR_8;
 while (VAR_14) {
  if (((unsigned long)VAR_14 >= VAR_12) &&
    ((unsigned long)VAR_14 < VAR_13)) {
   VAR_16 = (struct cmm_page_array *)FUNC_0(
     VAR_1 | VAR_6 |
     VAR_5 | VAR_4);
   if (!VAR_16) {
    FUNC_8(&VAR_7);
    FUNC_2("Failed to allocate memory for list "
      "management. Memory hotplug "
      "failed.\n");
    return -VAR_0;
   }
   FUNC_4(VAR_16, VAR_14, VAR_3);
   if (VAR_14 == VAR_8)
    VAR_8 = VAR_16;
   if (VAR_15)
    VAR_15->next = VAR_16;
   FUNC_3((unsigned long) VAR_14);
   VAR_18++;
   VAR_14 = VAR_16;
  }

  VAR_15 = VAR_14;
  VAR_14 = VAR_14->next;
 }

 FUNC_8(&VAR_7);
 FUNC_2("Released %ld pages in the search range.\n", VAR_18);

 return 0;
}
