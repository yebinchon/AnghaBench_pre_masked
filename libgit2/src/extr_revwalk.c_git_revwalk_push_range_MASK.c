
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int uninteresting; } ;
typedef TYPE_1__ git_revwalk__push_options ;
struct TYPE_10__ {int repo; } ;
typedef TYPE_2__ git_revwalk ;
struct TYPE_11__ {int flags; int to; int from; } ;
typedef TYPE_3__ git_revspec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,char const*) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_1__*) ;

int FUNC_5(git_revwalk *VAR_4, const char *VAR_5)
{
 git_revwalk__push_options VAR_6 = VAR_3;
 git_revspec VAR_7;
 int VAR_8 = 0;

 if ((VAR_8 = FUNC_3(&VAR_7, VAR_4->repo, VAR_5)))
  return VAR_8;

 if (!VAR_7.to) {
  FUNC_0(VAR_1, "invalid revspec: range not provided");
  VAR_8 = VAR_0;
  goto out;
 }

 if (VAR_7.flags & VAR_2) {

  FUNC_0(VAR_1, "symmetric differences not implemented in revwalk");
  VAR_8 = VAR_0;
  goto out;
 }

 VAR_6.uninteresting = 1;
 if ((VAR_8 = FUNC_4(VAR_4, FUNC_2(VAR_7.from), &VAR_6)))
  goto out;

 VAR_6.uninteresting = 0;
 VAR_8 = FUNC_4(VAR_4, FUNC_2(VAR_7.to), &VAR_6);

out:
 FUNC_1(VAR_7.from);
 FUNC_1(VAR_7.to);
 return VAR_8;
}
