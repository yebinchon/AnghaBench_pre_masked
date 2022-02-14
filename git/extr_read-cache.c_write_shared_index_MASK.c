
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; } ;
struct tempfile {TYPE_1__ filename; } ;
struct split_index {TYPE_2__* base; int base_oid; } ;
struct index_state {struct split_index* split_index; } ;
struct TYPE_4__ {int oid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,struct tempfile*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct tempfile*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct index_state*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct tempfile**,int ) ;
 int VAR_0 ;
 int FUNC_11 (char*,char*,int ,char*,int ) ;
 int FUNC_12 (char*,char*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_13(struct index_state *VAR_1,
         struct tempfile **VAR_2)
{
 struct split_index *VAR_3 = VAR_1->split_index;
 int VAR_4;

 FUNC_7(VAR_1);

 FUNC_11("index", "shared/do_write_index",
       VAR_0, "%s", (*VAR_2)->filename.buf);
 VAR_4 = FUNC_3(VAR_3->base, *VAR_2, 1);
 FUNC_12("index", "shared/do_write_index",
       VAR_0, "%s", (*VAR_2)->filename.buf);

 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(FUNC_5(*VAR_2));
 if (VAR_4) {
  FUNC_4(FUNC_0("cannot fix permission bits on '%s'"), FUNC_5(*VAR_2));
  return VAR_4;
 }
 VAR_4 = FUNC_10(VAR_2,
         FUNC_6("sharedindex.%s", FUNC_8(&VAR_3->base->oid)));
 if (!VAR_4) {
  FUNC_9(&VAR_3->base_oid, &VAR_3->base->oid);
  FUNC_2(FUNC_8(&VAR_3->base->oid));
 }

 return VAR_4;
}
