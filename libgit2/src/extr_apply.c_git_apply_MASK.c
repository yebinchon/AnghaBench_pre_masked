
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reader ;
typedef int git_indexwriter ;
typedef int git_index ;
typedef int git_diff ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ git_apply_options ;
typedef int git_apply_location_t ;


 int VAR_0 ;



 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__ const*,int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int *,int *,int *,int *,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *,int *,int *,int,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int **,int *,int *) ;
 int FUNC_11 (int **,int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__ const*,int) ;

int FUNC_15(
 git_repository *VAR_5,
 git_diff *VAR_6,
 git_apply_location_t VAR_7,
 const git_apply_options *VAR_8)
{
 git_indexwriter VAR_9 = VAR_4;
 git_index *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 git_reader *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 git_apply_options VAR_15 = VAR_1;
 int VAR_16 = VAR_3;

 FUNC_2(VAR_5 && VAR_6);

 FUNC_0(
  VAR_8, VAR_2, "git_apply_options");

 if (VAR_8)
  FUNC_14(&VAR_15, VAR_8, sizeof(git_apply_options));






 switch (VAR_7) {
 case 130:
  VAR_16 = FUNC_11(&VAR_13, VAR_5, 1);
  break;
 case 129:
  VAR_16 = FUNC_10(&VAR_13, VAR_5, ((void*)0));
  break;
 case 128:
  VAR_16 = FUNC_11(&VAR_13, VAR_5, 0);
  break;
 default:
  FUNC_2(0);
 }

 if (VAR_16 < 0)
  goto done;
 if ((VAR_16 = FUNC_6(&VAR_11)) < 0 ||
     (VAR_16 = FUNC_6(&VAR_12)) < 0 ||
     (VAR_16 = FUNC_10(&VAR_14, VAR_5, VAR_12)) < 0)
  goto done;

 if (!(VAR_15.flags & VAR_0))
  if ((VAR_16 = FUNC_13(&VAR_10, VAR_5)) < 0 ||
      (VAR_16 = FUNC_9(&VAR_9, VAR_10)) < 0)
   goto done;

 if ((VAR_16 = FUNC_1(VAR_5, VAR_13, VAR_11, VAR_14, VAR_12, VAR_6, &VAR_15)) < 0)
  goto done;

 if ((VAR_15.flags & VAR_0))
  goto done;

 switch (VAR_7) {
 case 130:
  VAR_16 = FUNC_4(VAR_5, VAR_6, VAR_11, VAR_12, VAR_7, &VAR_15);
  break;
 case 129:
  VAR_16 = FUNC_3(VAR_5, VAR_6, VAR_11, VAR_12, &VAR_15);
  break;
 case 128:
  VAR_16 = FUNC_4(VAR_5, VAR_6, VAR_11, VAR_12, VAR_7, &VAR_15);
  break;
 default:
  FUNC_2(0);
 }

 if (VAR_16 < 0)
  goto done;

 VAR_16 = FUNC_8(&VAR_9);

done:
 FUNC_7(&VAR_9);
 FUNC_5(VAR_12);
 FUNC_5(VAR_11);
 FUNC_5(VAR_10);
 FUNC_12(VAR_13);
 FUNC_12(VAR_14);

 return VAR_16;
}
