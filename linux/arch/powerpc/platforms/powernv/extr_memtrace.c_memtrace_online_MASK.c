
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memtrace_entry {scalar_t__ nid; scalar_t__ start; scalar_t__ size; int dir; scalar_t__ mem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct memtrace_entry*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 struct memtrace_entry* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,scalar_t__,int *,int ) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_6, VAR_7 = 0;
 struct memtrace_entry *VAR_8;

 for (VAR_6 = VAR_3 - 1; VAR_6 >= 0; VAR_6--) {
  VAR_8 = &VAR_2[VAR_6];


  if (VAR_8->nid == VAR_0)
   continue;


  if (VAR_8->mem) {
   FUNC_2(VAR_8->mem);
   VAR_8->mem = 0;
  }

  if (FUNC_0(VAR_8->nid, VAR_8->start, VAR_8->size)) {
   FUNC_5("Failed to add trace memory to node %d\n",
    VAR_8->nid);
   VAR_7 += 1;
   continue;
  }





  if (!VAR_1) {
   FUNC_4();
   FUNC_8(VAR_8->start, VAR_8->size, ((void*)0),
        VAR_5);
   FUNC_7();
  }





  FUNC_1(VAR_8->dir);
  FUNC_6("Added trace memory back to node %d\n", VAR_8->nid);
  VAR_8->size = VAR_8->start = VAR_8->nid = VAR_0;
 }
 if (VAR_7)
  return VAR_7;


 FUNC_3(VAR_2);
 VAR_2 = ((void*)0);
 VAR_4 = 0;
 VAR_3 = 0;
 return 0;
}
