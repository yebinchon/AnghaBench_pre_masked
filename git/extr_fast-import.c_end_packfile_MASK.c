
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tag {size_t pack_id; int oid; struct tag* next_tag; } ;
struct packed_git {char* pack_name; } ;
struct object_id {int hash; } ;
struct branch {size_t pack_id; int oid; struct branch* table_next_branch; } ;
struct TYPE_7__ {scalar_t__ depth; scalar_t__ offset; int data; } ;
struct TYPE_6__ {int pack_name; int pack_fd; int hash; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct packed_git* FUNC_1 (char*,int ,int) ;
 struct packed_git** VAR_0 ;
 struct branch** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ,int ) ;
 struct tag* VAR_3 ;
 int FUNC_9 (int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_10 (scalar_t__,char*,char*) ;
 int FUNC_11 (char,scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,struct packed_git*) ;
 int FUNC_14 (size_t) ;
 char* FUNC_15 (int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 char* FUNC_17 (int *) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 int VAR_11 ;
 int FUNC_20 (int ) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_21(void)
{
 static int VAR_13;

 if (VAR_13 || !VAR_6)
  return;

 VAR_13 = 1;
 FUNC_2();
 if (VAR_5) {
  struct packed_git *VAR_14;
  struct object_id VAR_15;
  char *VAR_16;
  int VAR_17;
  struct branch *VAR_18;
  struct tag *VAR_19;

  FUNC_4(VAR_6);
  FUNC_8(VAR_8, VAR_15.hash, 0);
  FUNC_9(VAR_6->pack_fd, VAR_6->hash,
      VAR_6->pack_name, VAR_5,
      VAR_15.hash, VAR_10);

  if (VAR_5 <= VAR_12) {
   if (!FUNC_16(VAR_6)) {
    FUNC_14(VAR_9);
    goto discard_pack;
   }
  }

  FUNC_3(VAR_6->pack_fd);
  VAR_16 = FUNC_15(FUNC_5());


  VAR_14 = FUNC_1(VAR_16, FUNC_19(VAR_16), 1);
  if (!VAR_14)
   FUNC_6("core git rejected index %s", VAR_16);
  VAR_0[VAR_9] = VAR_14;
  FUNC_13(VAR_11, VAR_14);
  FUNC_12(VAR_16);


  if (VAR_7) {
   FUNC_10(VAR_7, "%s:", VAR_14->pack_name);
   for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
    for (VAR_18 = VAR_1[VAR_17]; VAR_18; VAR_18 = VAR_18->table_next_branch) {
     if (VAR_18->pack_id == VAR_9)
      FUNC_10(VAR_7, " %s",
       FUNC_17(&VAR_18->oid));
    }
   }
   for (VAR_19 = VAR_3; VAR_19; VAR_19 = VAR_19->next_tag) {
    if (VAR_19->pack_id == VAR_9)
     FUNC_10(VAR_7, " %s",
      FUNC_17(&VAR_19->oid));
   }
   FUNC_11('\n', VAR_7);
   FUNC_7(VAR_7);
  }

  VAR_9++;
 }
 else {
discard_pack:
  FUNC_3(VAR_6->pack_fd);
  FUNC_20(VAR_6->pack_name);
 }
 FUNC_0(VAR_6);
 VAR_13 = 0;


 FUNC_18(&VAR_4.data);
 VAR_4.offset = 0;
 VAR_4.depth = 0;
}
