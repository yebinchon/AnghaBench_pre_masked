
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct entry_internal {size_t pathlen; } ;
struct TYPE_24__ {int mode; scalar_t__ path; int id; int flags_extended; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_25__ {int dirty; int entries; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,size_t,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,size_t) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__**,size_t*,TYPE_1__**,TYPE_2__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_15 (char*,scalar_t__,int ) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static int FUNC_17(
 git_index *VAR_3,
 git_index_entry **VAR_4,
 int VAR_5,
 bool VAR_6,
 bool VAR_7,
 bool VAR_8)
{
 git_index_entry *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;

 FUNC_2(VAR_3 && VAR_4);

 VAR_11 = *VAR_4;


 VAR_12 = ((struct entry_internal *)VAR_11)->pathlen;
 FUNC_10(VAR_11, VAR_12);


 VAR_11->flags_extended |= VAR_1;

 FUNC_9(&VAR_3->entries);





 FUNC_13(&VAR_9, &VAR_13, &VAR_10, VAR_3, VAR_11);


 VAR_11->mode = VAR_7 ?
  FUNC_5(VAR_11->mode) :
  FUNC_14(VAR_3, VAR_10, VAR_11->mode);


 if (!VAR_6 && (VAR_14 = FUNC_3(VAR_3, VAR_11, VAR_10)) < 0)
  goto out;


 if (!VAR_8 && FUNC_0(VAR_3) &&
     (VAR_11->mode & VAR_0) != VAR_0) {

  if (!FUNC_6(FUNC_0(VAR_3), &VAR_11->id,
       FUNC_7(VAR_11->mode))) {
   VAR_14 = -1;
   goto out;
  }
 }


 if ((VAR_14 = FUNC_4(VAR_3, VAR_11, VAR_13, VAR_5)) < 0)
  goto out;





 if (VAR_9) {
  if (VAR_5) {
   FUNC_11(VAR_9, VAR_11);

   if (VAR_6)
    FUNC_15((char *)VAR_9->path, VAR_11->path, FUNC_16(VAR_11->path));
  }

  FUNC_12(VAR_11);
  *VAR_4 = VAR_9;
 } else {





  if ((VAR_14 = FUNC_8(&VAR_3->entries, VAR_11, VAR_2)) < 0)
   goto out;

  FUNC_1(VAR_3, VAR_11, VAR_14);
 }

 VAR_3->dirty = 1;

out:
 if (VAR_14 < 0) {
  FUNC_12(*VAR_4);
  *VAR_4 = ((void*)0);
 }

 return VAR_14;
}
