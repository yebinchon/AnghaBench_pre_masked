
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_sideband; } ;
struct upload_pack_data {int done; int deepen_relative; TYPE_1__ writer; int deepen_rev_list; int deepen_not; int deepen_since; int depth; int shallows; int haves; int wanted_refs; } ;
struct packet_reader {char* line; } ;
struct object_array {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct packet_reader*) ;
 scalar_t__ FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char const*,struct object_array*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*,int *,struct object_array*) ;
 scalar_t__ FUNC_8 (char const*,int *) ;
 scalar_t__ FUNC_9 (char const*,int *,int *) ;
 scalar_t__ FUNC_10 (char const*,int *,int *) ;
 scalar_t__ FUNC_11 (char const*,int *) ;
 scalar_t__ FUNC_12 (char const*,char*,char const**) ;
 int FUNC_13 (char const*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_14(struct packet_reader *VAR_9,
    struct upload_pack_data *VAR_10,
    struct object_array *VAR_11)
{
 while (FUNC_3(VAR_9) != VAR_0) {
  const char *VAR_12 = VAR_9->line;
  const char *VAR_13;


  if (FUNC_6(&VAR_10->writer, VAR_12, VAR_11))
   continue;
  if (VAR_2 &&
      FUNC_7(&VAR_10->writer, VAR_12, &VAR_10->wanted_refs,
       VAR_11))
   continue;

  if (FUNC_4(VAR_12, &VAR_10->haves))
   continue;


  if (!FUNC_13(VAR_12, "thin-pack")) {
   VAR_8 = 1;
   continue;
  }
  if (!FUNC_13(VAR_12, "ofs-delta")) {
   VAR_7 = 1;
   continue;
  }
  if (!FUNC_13(VAR_12, "no-progress")) {
   VAR_5 = 1;
   continue;
  }
  if (!FUNC_13(VAR_12, "include-tag")) {
   VAR_6 = 1;
   continue;
  }
  if (!FUNC_13(VAR_12, "done")) {
   VAR_10->done = 1;
   continue;
  }


  if (FUNC_11(VAR_12, &VAR_10->shallows))
   continue;
  if (FUNC_8(VAR_12, &VAR_10->depth))
   continue;
  if (FUNC_10(VAR_12, &VAR_10->deepen_since,
      &VAR_10->deepen_rev_list))
   continue;
  if (FUNC_9(VAR_12, &VAR_10->deepen_not,
           &VAR_10->deepen_rev_list))
   continue;
  if (!FUNC_13(VAR_12, "deepen-relative")) {
   VAR_10->deepen_relative = 1;
   continue;
  }

  if (VAR_1 && FUNC_12(VAR_12, "filter ", &VAR_13)) {
   FUNC_2(&VAR_4);
   FUNC_5(&VAR_4, VAR_13);
   continue;
  }

  if ((FUNC_1("GIT_TEST_SIDEBAND_ALL", 0) ||
       VAR_3) &&
      !FUNC_13(VAR_12, "sideband-all")) {
   VAR_10->writer.use_sideband = 1;
   continue;
  }


  FUNC_0("unexpected line: '%s'", VAR_12);
 }
}
