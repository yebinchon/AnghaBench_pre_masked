
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memtrace_entry {int start; int size; int nid; struct dentry* dir; int name; int mem; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct memtrace_entry*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int*) ;
 int FUNC_3 (int,int) ;
 struct memtrace_entry* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct dentry *VAR_6;
  struct memtrace_entry *VAR_7 = &VAR_0[VAR_5];

  VAR_7->mem = FUNC_3(VAR_7->start, VAR_7->size);

  if (!VAR_7->mem) {
   FUNC_4("Failed to map trace memory at 0x%llx\n",
     VAR_7->start);
   VAR_4 = -1;
   continue;
  }

  FUNC_5(VAR_7->name, 16, "%08x", VAR_7->nid);
  VAR_6 = FUNC_0(VAR_7->name, VAR_2);
  if (!VAR_6) {
   FUNC_4("Failed to create debugfs directory for node %d\n",
    VAR_7->nid);
   return -1;
  }

  VAR_7->dir = VAR_6;
  FUNC_1("trace", 0400, VAR_6, VAR_7, &VAR_3);
  FUNC_2("start", 0400, VAR_6, &VAR_7->start);
  FUNC_2("size", 0400, VAR_6, &VAR_7->size);
 }

 return VAR_4;
}
