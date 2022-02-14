
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct strbuf {char* buf; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct multi_pack_index {scalar_t__ num_objects; int num_packs; } ;
struct child_process {int git_cmd; int in; int out; int args; } ;
struct TYPE_2__ {int hexsz; } ;


 struct child_process VAR_0 ;
 unsigned int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct multi_pack_index*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct multi_pack_index*,unsigned char*) ;
 scalar_t__ FUNC_6 (struct repository*,struct multi_pack_index*,unsigned char*,size_t) ;
 scalar_t__ FUNC_7 (struct child_process*) ;
 int FUNC_8 (unsigned char*) ;
 struct multi_pack_index* FUNC_9 (char const*,int) ;
 int FUNC_10 (struct object_id*,struct multi_pack_index*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct multi_pack_index*,scalar_t__) ;
 char* FUNC_12 (struct object_id*) ;
 scalar_t__ FUNC_13 (struct child_process*) ;
 int FUNC_14 (struct strbuf*,char const*) ;
 int FUNC_15 (struct strbuf*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_16 (char const*,struct multi_pack_index*,int *,unsigned int) ;
 unsigned char* FUNC_17 (int ,int) ;
 int FUNC_18 (int,char*,int) ;

int FUNC_19(struct repository *VAR_4, const char *VAR_5, size_t VAR_6, unsigned VAR_7)
{
 int VAR_8 = 0;
 uint32_t VAR_9;
 unsigned char *VAR_10;
 struct child_process VAR_11 = VAR_0;
 struct strbuf VAR_12 = VAR_2;
 struct multi_pack_index *VAR_13 = FUNC_9(VAR_5, 1);

 if (!VAR_13)
  return 0;

 VAR_10 = FUNC_17(VAR_13->num_packs, sizeof(unsigned char));

 if (VAR_6) {
  if (FUNC_6(VAR_4, VAR_13, VAR_10, VAR_6))
   goto cleanup;
 } else if (FUNC_5(VAR_13, VAR_10))
  goto cleanup;

 FUNC_1(&VAR_11.args, "pack-objects");

 FUNC_14(&VAR_12, VAR_5);
 FUNC_14(&VAR_12, "/pack/pack");
 FUNC_1(&VAR_11.args, VAR_12.buf);

 if (VAR_7 & VAR_1)
  FUNC_1(&VAR_11.args, "--progress");
 else
  FUNC_1(&VAR_11.args, "-q");

 FUNC_15(&VAR_12);

 VAR_11.git_cmd = 1;
 VAR_11.in = VAR_11.out = -1;

 if (FUNC_13(&VAR_11)) {
  FUNC_4(FUNC_0("could not start pack-objects"));
  VAR_8 = 1;
  goto cleanup;
 }

 for (VAR_9 = 0; VAR_9 < VAR_13->num_objects; VAR_9++) {
  struct object_id VAR_14;
  uint32_t VAR_15 = FUNC_11(VAR_13, VAR_9);

  if (!VAR_10[VAR_15])
   continue;

  FUNC_10(&VAR_14, VAR_13, VAR_9);
  FUNC_18(VAR_11.in, FUNC_12(&VAR_14), VAR_3->hexsz);
  FUNC_18(VAR_11.in, "\n", 1);
 }
 FUNC_2(VAR_11.in);

 if (FUNC_7(&VAR_11)) {
  FUNC_4(FUNC_0("could not finish pack-objects"));
  VAR_8 = 1;
  goto cleanup;
 }

 VAR_8 = FUNC_16(VAR_5, VAR_13, ((void*)0), VAR_7);
 VAR_13 = ((void*)0);

cleanup:
 if (VAR_13)
  FUNC_3(VAR_13);
 FUNC_8(VAR_10);
 return VAR_8;
}
