
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tree {int dummy; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_6__ {int nr; scalar_t__ has_wildcard; TYPE_1__* items; } ;
struct TYPE_5__ {int len; int nowildcard_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 struct option const FUNC_1 (char,char*,int*,int ,int) ;
 struct option const FUNC_2 (int ,char*,int*,int ) ;
 struct option const FUNC_3 () ;
 struct option const FUNC_4 (char,char*,scalar_t__*,int ,int ) ;
 struct option const FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char const*,struct object_id*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 char const* VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,char const*,char const**) ;
 struct tree* FUNC_11 (struct object_id*) ;
 TYPE_2__ VAR_16 ;
 int FUNC_12 (int ,struct tree*,char*,int ,int ,TYPE_2__*,int ,int *) ;
 int VAR_17 ;
 scalar_t__ FUNC_13 (char const*) ;
 int VAR_18 ;
 int FUNC_14 (int ,struct option const*) ;

int FUNC_15(int VAR_19, const char **VAR_20, const char *VAR_21)
{
 struct object_id VAR_22;
 struct tree *VAR_23;
 int VAR_24, VAR_25 = 0;
 const struct option VAR_26[] = {
  FUNC_1('d', ((void*)0), &VAR_13, FUNC_0("only show trees"),
   VAR_4),
  FUNC_1('r', ((void*)0), &VAR_13, FUNC_0("recurse into subtrees"),
   VAR_1),
  FUNC_1('t', ((void*)0), &VAR_13, FUNC_0("show trees when recursing"),
   VAR_3),
  FUNC_4('z', ((void*)0), &VAR_12,
       FUNC_0("terminate entries with NUL byte"), 0),
  FUNC_1('l', "long", &VAR_13, FUNC_0("include object size"),
   VAR_2),
  FUNC_1(0, "name-only", &VAR_13, FUNC_0("list only filenames"),
   VAR_0),
  FUNC_1(0, "name-status", &VAR_13, FUNC_0("list only filenames"),
   VAR_0),
  FUNC_4(0, "full-name", &VAR_10,
       FUNC_0("use full path names"), 0),
  FUNC_2(0, "full-tree", &VAR_25,
    FUNC_0("list entire tree; not just current directory "
       "(implies --full-name)")),
  FUNC_5(&VAR_9),
  FUNC_3()
 };

 FUNC_8(VAR_11, ((void*)0));
 VAR_14 = VAR_21;
 if (VAR_21 && *VAR_21)
  VAR_10 = FUNC_13(VAR_21);

 VAR_19 = FUNC_9(VAR_19, VAR_20, VAR_21, VAR_26,
        VAR_15, 0);
 if (VAR_25) {
  VAR_14 = VAR_21 = ((void*)0);
  VAR_10 = 0;
 }

 if ( (VAR_4|VAR_1) ==
     ((VAR_4|VAR_1) & VAR_13))
  VAR_13 |= VAR_3;

 if (VAR_19 < 1)
  FUNC_14(VAR_15, VAR_26);
 if (FUNC_7(VAR_20[0], &VAR_22))
  FUNC_6("Not a valid object name %s", VAR_20[0]);







 FUNC_10(&VAR_16, VAR_5 &
      ~(VAR_6 | VAR_7),
         VAR_8,
         VAR_21, VAR_20 + 1);
 for (VAR_24 = 0; VAR_24 < VAR_16.nr; VAR_24++)
  VAR_16.items[VAR_24].nowildcard_len = VAR_16.items[VAR_24].len;
 VAR_16.has_wildcard = 0;
 VAR_23 = FUNC_11(&VAR_22);
 if (!VAR_23)
  FUNC_6("not a tree object");
 return !!FUNC_12(VAR_18, VAR_23, "", 0, 0,
         &VAR_16, VAR_17, ((void*)0));
}
