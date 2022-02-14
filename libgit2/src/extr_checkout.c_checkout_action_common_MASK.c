
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ mode; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_13__ {TYPE_1__ new_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_checkout_notify_t ;
struct TYPE_14__ {int strategy; } ;
typedef TYPE_4__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_3__ const*,TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_3(
 int *VAR_9,
 checkout_data *VAR_10,
 const git_diff_delta *VAR_11,
 const git_index_entry *VAR_12)
{
 git_checkout_notify_t VAR_13 = VAR_5;

 if ((VAR_10->strategy & VAR_7) != 0)
  *VAR_9 = (*VAR_9 & ~VAR_1);

 if ((*VAR_9 & VAR_2) != 0) {
  if (FUNC_1(VAR_11->new_file.mode))
   *VAR_9 = (*VAR_9 & ~VAR_2) |
    VAR_3;


  if (VAR_11->new_file.mode == VAR_8 && VAR_12 != ((void*)0))
   *VAR_9 |= VAR_1;


  if (VAR_12 &&
   FUNC_0(VAR_12->mode) !=
   FUNC_0(VAR_11->new_file.mode))
    *VAR_9 |= VAR_1;

  VAR_13 = VAR_6;
 }

 if ((*VAR_9 & VAR_0) != 0)
  VAR_13 = VAR_4;

 return FUNC_2(VAR_10, VAR_13, VAR_11, VAR_12);
}
