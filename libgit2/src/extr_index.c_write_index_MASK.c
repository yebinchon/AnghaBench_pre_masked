
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct index_header {void* entry_count; void* version; void* signature; } ;
struct TYPE_20__ {struct index_header* id; } ;
typedef TYPE_4__ git_oid ;
struct TYPE_19__ {scalar_t__ length; } ;
struct TYPE_18__ {scalar_t__ length; } ;
struct TYPE_17__ {scalar_t__ length; } ;
struct TYPE_21__ {scalar_t__ version; TYPE_3__ reuc; TYPE_2__ names; int * tree; TYPE_1__ entries; } ;
typedef TYPE_5__ git_index ;
typedef int git_filebuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_3 (int *,struct index_header*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_11(git_oid *VAR_4, git_index *VAR_5, git_filebuf *VAR_6)
{
 git_oid VAR_7;
 struct index_header VAR_8;
 bool VAR_9;
 uint32_t VAR_10;

 FUNC_0(VAR_5 && VAR_6);

 if (VAR_5->version <= VAR_2) {
  VAR_9 = FUNC_6(VAR_5);
  VAR_10 = VAR_9 ? VAR_2 : VAR_3;
 } else {
  VAR_10 = VAR_5->version;
 }

 VAR_8.signature = FUNC_5(VAR_1);
 VAR_8.version = FUNC_5(VAR_10);
 VAR_8.entry_count = FUNC_5((uint32_t)VAR_5->entries.length);

 if (FUNC_3(VAR_6, &VAR_8, sizeof(struct index_header)) < 0)
  return -1;

 if (FUNC_7(VAR_5, VAR_6) < 0)
  return -1;


 if (VAR_5->tree != ((void*)0) && FUNC_10(VAR_5, VAR_6) < 0)
  return -1;


 if (VAR_5->names.length > 0 && FUNC_8(VAR_5, VAR_6) < 0)
  return -1;


 if (VAR_5->reuc.length > 0 && FUNC_9(VAR_5, VAR_6) < 0)
  return -1;


 FUNC_2(&VAR_7, VAR_6);
 FUNC_4(VAR_4, &VAR_7);


 if (FUNC_3(VAR_6, VAR_7.id, VAR_0) < 0)
  return -1;


 FUNC_1(VAR_5);

 return 0;
}
