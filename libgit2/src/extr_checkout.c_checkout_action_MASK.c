
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int git_vector ;
typedef int git_iterator ;
struct TYPE_32__ {char const* path; scalar_t__ mode; } ;
typedef TYPE_4__ git_index_entry ;
struct TYPE_31__ {char const* path; scalar_t__ mode; } ;
struct TYPE_30__ {scalar_t__ mode; } ;
struct TYPE_33__ {scalar_t__ status; TYPE_3__ old_file; TYPE_2__ new_file; } ;
typedef TYPE_6__ git_diff_delta ;
struct TYPE_34__ {TYPE_1__* diff; } ;
typedef TYPE_7__ checkout_data ;
struct TYPE_29__ {int (* strcomp ) (char const*,char const*) ;int (* pfxcomp ) (char const*,char const*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,TYPE_7__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_7__*,int *,TYPE_4__ const**,int *) ;
 int FUNC_2 (int*,TYPE_7__*,TYPE_6__*,int *,TYPE_4__ const*) ;
 int FUNC_3 (int*,TYPE_7__*,TYPE_6__*,TYPE_4__ const*) ;
 int FUNC_4 (int*,TYPE_7__*,TYPE_6__*,int *,TYPE_4__ const*) ;
 int FUNC_5 (int*,TYPE_7__*,TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*,char*) ;
 int FUNC_7 (TYPE_4__ const**,int *) ;
 int FUNC_8 (TYPE_4__ const**,int *) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(
 int *VAR_4,
 checkout_data *VAR_5,
 git_diff_delta *VAR_6,
 git_iterator *VAR_7,
 const git_index_entry **VAR_8,
 git_vector *VAR_9)
{
 int VAR_10 = -1, VAR_11;
 int (*VAR_12)(const char *, const char *) = VAR_5->diff->strcomp;
 int (*VAR_13)(const char *VAR_14, const char *VAR_15) = VAR_5->diff->pfxcomp;
 int (*VAR_16)(const git_index_entry **, git_iterator *) = ((void*)0);



 while (1) {
  const git_index_entry *VAR_17 = *VAR_8;

  if (!VAR_17)
   return FUNC_0(VAR_4, VAR_5, VAR_6);

  VAR_10 = VAR_12(VAR_17->path, VAR_6->old_file.path);
  if (VAR_10 < 0) {
   VAR_10 = VAR_13(VAR_6->old_file.path, VAR_17->path);

   if (VAR_10 == 0) {
    if (VAR_17->mode == VAR_2) {

     VAR_11 = FUNC_8(VAR_8, VAR_7);
     if (VAR_11 < 0 && VAR_11 != VAR_3)
      goto done;
     continue;
    }


    if (VAR_6->old_file.path[FUNC_9(VAR_17->path)] == '/') {
     VAR_11 = FUNC_3(
      VAR_4, VAR_5, VAR_6, VAR_17);
     VAR_16 = FUNC_7;
     goto done;
    }
   }


   VAR_11 = FUNC_1(VAR_5, VAR_7, VAR_8, VAR_9);
   if (VAR_11 && VAR_11 != VAR_3)
    goto done;
   continue;
  }

  if (VAR_10 == 0) {

   VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_17);
   VAR_16 = FUNC_7;
   goto done;
  }

  VAR_10 = VAR_13(VAR_17->path, VAR_6->old_file.path);

  if (VAR_10 == 0) {
   if (VAR_17->path[FUNC_9(VAR_6->old_file.path)] != '/')
    return FUNC_0(VAR_4, VAR_5, VAR_6);

   if (VAR_6->status == VAR_0) {
    if (VAR_6->old_file.mode == VAR_2) {
     VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_17);
     VAR_16 = FUNC_8;
     goto done;
    }

    if (VAR_6->new_file.mode == VAR_2 ||
     VAR_6->new_file.mode == VAR_1 ||
     VAR_6->old_file.mode == VAR_1)
    {
     VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_17);
     VAR_16 = FUNC_7;
     goto done;
    }
   }

   return FUNC_6(VAR_5, VAR_17->path) ?
    FUNC_5(VAR_4, VAR_5, VAR_6) :
    FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_17);
  }


  return FUNC_0(VAR_4, VAR_5, VAR_6);
 }

done:
 if (!VAR_11 && VAR_16 != ((void*)0) &&
  (VAR_11 = VAR_16(VAR_8, VAR_7)) < 0) {
  *VAR_8 = ((void*)0);
  if (VAR_11 == VAR_3)
   VAR_11 = 0;
 }

 return VAR_11;
}
