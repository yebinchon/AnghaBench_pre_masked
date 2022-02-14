
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int member_0; } ;
struct TYPE_14__ {char const* ancestor; char const* file1; char const* file2; scalar_t__ style; scalar_t__ favor; int level; int marker_size; TYPE_1__ member_0; } ;
typedef TYPE_2__ xmparam_t ;
struct option {int dummy; } ;
struct TYPE_15__ {scalar_t__ size; char* ptr; } ;
typedef TYPE_3__ mmfile_t ;
struct TYPE_16__ {char* ptr; scalar_t__ size; int member_1; int * member_0; } ;
typedef TYPE_4__ mmbuffer_t ;
struct TYPE_12__ {scalar_t__ have_repository; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 (char,int *,char const**,int ,int ,int *) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (int ,char*,int *,int ) ;
 struct option FUNC_5 (int ,char*,scalar_t__*,int ,int ) ;
 struct option FUNC_6 (int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int ) ;
 int FUNC_14 (char*,scalar_t__,int,int *) ;
 int FUNC_15 (int ,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int,char const**,char const*,struct option*,int ,int ) ;
 char* FUNC_17 (char const*,char const*) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 TYPE_10__* VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_19 (int ,struct option*) ;
 int FUNC_20 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_2__*,TYPE_4__*) ;

int FUNC_21(int VAR_13, const char **VAR_14, const char *VAR_15)
{
 const char *VAR_16[3] = { ((void*)0), ((void*)0), ((void*)0) };
 mmfile_t VAR_17[3];
 mmbuffer_t VAR_18 = {((void*)0), 0};
 xmparam_t VAR_19 = {0};
 int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 int VAR_23 = 0;
 struct option VAR_24[] = {
  FUNC_1('p', "stdout", &VAR_22, FUNC_0("send results to standard output")),
  FUNC_5(0, "diff3", &VAR_19.style, FUNC_0("use a diff3 based merge"), VAR_1),
  FUNC_5(0, "ours", &VAR_19.favor, FUNC_0("for conflicts, use our version"),
       VAR_2),
  FUNC_5(0, "theirs", &VAR_19.favor, FUNC_0("for conflicts, use their version"),
       VAR_3),
  FUNC_5(0, "union", &VAR_19.favor, FUNC_0("for conflicts, use a union version"),
       VAR_4),
  FUNC_4(0, "marker-size", &VAR_19.marker_size,
       FUNC_0("for conflicts, use this marker size")),
  FUNC_6(&VAR_23, FUNC_0("do not warn about conflicts")),
  FUNC_2('L', ((void*)0), VAR_16, FUNC_0("name"),
        FUNC_0("set labels for file1/orig-file/file2"), &VAR_8),
  FUNC_3(),
 };

 VAR_19.level = VAR_5;
 VAR_19.style = 0;
 VAR_19.favor = 0;

 if (VAR_10->have_repository) {

  FUNC_15(VAR_6, ((void*)0));
  if (0 <= VAR_7)
   VAR_19.style = VAR_7;
 }

 VAR_13 = FUNC_16(VAR_13, VAR_14, VAR_15, VAR_24, VAR_9, 0);
 if (VAR_13 != 3)
  FUNC_19(VAR_9, VAR_24);
 if (VAR_23) {
  if (!FUNC_13("/dev/null", "w", VAR_11))
   return FUNC_9("failed to redirect stderr to /dev/null");
 }

 for (VAR_21 = 0; VAR_21 < 3; VAR_21++) {
  char *VAR_25;
  int VAR_26;

  if (!VAR_16[VAR_21])
   VAR_16[VAR_21] = VAR_14[VAR_21];

  VAR_25 = FUNC_17(VAR_15, VAR_14[VAR_21]);
  VAR_26 = FUNC_18(VAR_17 + VAR_21, VAR_25);
  FUNC_12(VAR_25);
  if (VAR_26)
   return -1;

  if (VAR_17[VAR_21].size > VAR_0 ||
      FUNC_7(VAR_17[VAR_21].ptr, VAR_17[VAR_21].size))
   return FUNC_8("Cannot merge binary files: %s",
     VAR_14[VAR_21]);
 }

 VAR_19.ancestor = VAR_16[1];
 VAR_19.file1 = VAR_16[0];
 VAR_19.file2 = VAR_16[2];
 VAR_20 = FUNC_20(VAR_17 + 1, VAR_17 + 0, VAR_17 + 2, &VAR_19, &VAR_18);

 for (VAR_21 = 0; VAR_21 < 3; VAR_21++)
  FUNC_12(VAR_17[VAR_21].ptr);

 if (VAR_20 >= 0) {
  const char *VAR_27 = VAR_14[0];
  char *VAR_28 = FUNC_17(VAR_15, VAR_14[0]);
  FILE *VAR_29 = VAR_22 ? VAR_12 : FUNC_11(VAR_28, "wb");

  if (!VAR_29)
   VAR_20 = FUNC_9("Could not open %s for writing",
       VAR_27);
  else if (VAR_18.size &&
    FUNC_14(VAR_18.ptr, VAR_18.size, 1, VAR_29) != 1)
   VAR_20 = FUNC_9("Could not write to %s", VAR_27);
  else if (FUNC_10(VAR_29))
   VAR_20 = FUNC_9("Could not close %s", VAR_27);
  FUNC_12(VAR_18.ptr);
  FUNC_12(VAR_28);
 }

 if (VAR_20 > 127)
  VAR_20 = 127;

 return VAR_20;
}
