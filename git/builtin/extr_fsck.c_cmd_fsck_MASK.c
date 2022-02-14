
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint32_t ;
struct progress {int dummy; } ;
struct packed_git {scalar_t__ num_objects; struct packed_git* next; } ;
struct object_id {int dummy; } ;
struct object_directory {char* path; struct object_directory* next; } ;
struct object {int flags; } ;
struct decoration {int dummy; } ;
struct child_process {char const** argv; int git_cmd; } ;
struct blob {struct object object; } ;
struct TYPE_16__ {int strict; int error_func; int walk; } ;
struct TYPE_15__ {int object_names; int walk; } ;
struct TYPE_14__ {TYPE_1__* objects; } ;
struct TYPE_13__ {struct object_directory* odb; } ;
struct TYPE_12__ {unsigned int ce_mode; int name; int oid; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 TYPE_11__** VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,struct object*,int ) ;
 int FUNC_3 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct child_process*) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ,char const*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_9 (TYPE_9__*) ;
 int VAR_16 ;
 TYPE_9__ VAR_17 ;
 int FUNC_10 (char*) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_8__ VAR_20 ;
 struct packed_git* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 () ;
 int FUNC_13 (char const*,struct object_id*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (char*,int*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_16 (struct object_id*) ;
 int FUNC_17 (int) ;
 int VAR_22 ;
 struct blob* FUNC_18 (TYPE_2__*,int *) ;
 struct object* FUNC_19 (TYPE_2__*,struct object_id*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_20 (struct object*) ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 char const* FUNC_21 (struct object_id*) ;
 scalar_t__ FUNC_22 (struct packed_git*) ;
 int FUNC_23 (int,char const**,char const*,int ,int ,int ) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 () ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_26 (struct child_process*) ;
 int VAR_29 ;
 struct progress* FUNC_27 (int ,int ) ;
 int FUNC_28 (struct progress**) ;
 TYPE_2__* VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_29 (TYPE_2__*,struct packed_git*,int ,struct progress*,int ) ;
 scalar_t__ VAR_34 ;
 int FUNC_30 (int,int) ;
 int FUNC_31 (char const*) ;
 int FUNC_32 (char*,int ) ;

int FUNC_33(int VAR_35, const char **VAR_36, const char *VAR_37)
{
 int VAR_38;
 struct object_directory *VAR_39;


 VAR_13 = 0;

 VAR_12 = 0;
 VAR_28 = 0;

 VAR_35 = FUNC_23(VAR_35, VAR_36, VAR_37, VAR_18, VAR_19, 0);

 VAR_20.walk = VAR_24;
 VAR_17.walk = VAR_26;
 VAR_17.error_func = VAR_15;
 if (VAR_10)
  VAR_17.strict = 1;

 if (VAR_29 == -1)
  VAR_29 = FUNC_17(2);
 if (VAR_31)
  VAR_29 = 0;

 if (VAR_34) {
  VAR_9 = 1;
  VAR_21 = 0;
 }

 if (VAR_27)
  VAR_20.object_names =
   FUNC_30(1, sizeof(struct decoration));

 FUNC_14(VAR_14, ((void*)0));

 if (VAR_11) {
  FUNC_6(VAR_23, ((void*)0), 0);
  FUNC_7(VAR_25, ((void*)0), 0);
 } else {
  FUNC_24(VAR_30);
  for (VAR_39 = VAR_30->objects->odb; VAR_39; VAR_39 = VAR_39->next)
   FUNC_10(VAR_39->path);

  if (VAR_9) {
   struct packed_git *VAR_40;
   uint32_t VAR_41 = 0, VAR_42 = 0;
   struct progress *VAR_43 = ((void*)0);

   if (VAR_29) {
    for (VAR_40 = FUNC_11(VAR_30); VAR_40;
         VAR_40 = VAR_40->next) {
     if (FUNC_22(VAR_40))
      continue;
     VAR_41 += VAR_40->num_objects;
    }

    VAR_43 = FUNC_27(FUNC_1("Checking objects"), VAR_41);
   }
   for (VAR_40 = FUNC_11(VAR_30); VAR_40;
        VAR_40 = VAR_40->next) {

    if (FUNC_29(VAR_30,
      VAR_40, VAR_16,
      VAR_43, VAR_42))
     VAR_12 |= VAR_3;
    VAR_42 += VAR_40->num_objects;
   }
   FUNC_28(&VAR_43);
  }

  if (FUNC_9(&VAR_17))
   VAR_12 |= VAR_2;
 }

 for (VAR_38 = 0; VAR_38 < VAR_35; VAR_38++) {
  const char *VAR_44 = VAR_36[VAR_38];
  struct object_id VAR_45;
  if (!FUNC_13(VAR_44, &VAR_45)) {
   struct object *VAR_46 = FUNC_19(VAR_30,
          &VAR_45);

   if (!VAR_46 || !(VAR_46->flags & VAR_4)) {
    if (FUNC_16(&VAR_45))
     continue;
    FUNC_5(FUNC_1("%s: object missing"), FUNC_21(&VAR_45));
    VAR_12 |= VAR_2;
    continue;
   }

   VAR_46->flags |= VAR_5;
   if (VAR_27)
    FUNC_2(VAR_20.object_names,
     VAR_46, FUNC_31(VAR_44));
   FUNC_20(VAR_46);
   continue;
  }
  FUNC_5(FUNC_1("invalid parameter: expected sha1, got '%s'"), VAR_44);
  VAR_12 |= VAR_2;
 }






 if (!VAR_35) {
  FUNC_12();
  VAR_22 = 1;
 }

 if (VAR_22) {
  VAR_33 = 1;
  VAR_32 = 1;
  FUNC_25();
  for (VAR_38 = 0; VAR_38 < VAR_8; VAR_38++) {
   unsigned int VAR_47;
   struct blob *VAR_48;
   struct object *VAR_49;

   VAR_47 = VAR_6[VAR_38]->ce_mode;
   if (FUNC_0(VAR_47))
    continue;
   VAR_48 = FUNC_18(VAR_30,
        &VAR_6[VAR_38]->oid);
   if (!VAR_48)
    continue;
   VAR_49 = &VAR_48->object;
   VAR_49->flags |= VAR_5;
   if (VAR_27)
    FUNC_2(VAR_20.object_names,
     VAR_49,
     FUNC_32(":%s", VAR_6[VAR_38]->name));
   FUNC_20(VAR_49);
  }
  if (VAR_7)
   FUNC_8(VAR_7);
 }

 FUNC_3();

 if (!FUNC_15("core.commitgraph", &VAR_38) && VAR_38) {
  struct child_process VAR_50 = VAR_0;
  const char *VAR_51[] = { "commit-graph", "verify", ((void*)0), ((void*)0), ((void*)0) };

  FUNC_24(VAR_30);
  for (VAR_39 = VAR_30->objects->odb; VAR_39; VAR_39 = VAR_39->next) {
   FUNC_4(&VAR_50);
   VAR_50.argv = VAR_51;
   VAR_50.git_cmd = 1;
   VAR_51[2] = "--object-dir";
   VAR_51[3] = VAR_39->path;
   if (FUNC_26(&VAR_50))
    VAR_12 |= VAR_1;
  }
 }

 if (!FUNC_15("core.multipackindex", &VAR_38) && VAR_38) {
  struct child_process VAR_52 = VAR_0;
  const char *VAR_53[] = { "multi-pack-index", "verify", ((void*)0), ((void*)0), ((void*)0) };

  FUNC_24(VAR_30);
  for (VAR_39 = VAR_30->objects->odb; VAR_39; VAR_39 = VAR_39->next) {
   FUNC_4(&VAR_52);
   VAR_52.argv = VAR_53;
   VAR_52.git_cmd = 1;
   VAR_53[2] = "--object-dir";
   VAR_53[3] = VAR_39->path;
   if (FUNC_26(&VAR_52))
    VAR_12 |= VAR_1;
  }
 }

 return VAR_12;
}
