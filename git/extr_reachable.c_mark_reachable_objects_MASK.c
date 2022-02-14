
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct rev_info {int tag_objects; int blob_objects; int tree_objects; int ignore_missing_links; } ;
struct progress {int dummy; } ;
struct connectivity_progress {scalar_t__ count; struct progress* progress; } ;
struct bitmap_index {int dummy; } ;


 int FUNC_0 (struct rev_info*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rev_info*,int ) ;
 scalar_t__ FUNC_2 (struct rev_info*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct progress*,scalar_t__) ;
 int FUNC_5 (int ,struct rev_info*) ;
 int FUNC_6 (struct bitmap_index*) ;
 int FUNC_7 (int ,struct rev_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,struct rev_info*) ;
 struct bitmap_index* FUNC_9 (struct rev_info*) ;
 scalar_t__ FUNC_10 (struct rev_info*) ;
 int FUNC_11 (struct bitmap_index*,int ) ;
 int FUNC_12 (struct rev_info*,int ,int ,struct connectivity_progress*) ;

void FUNC_13(struct rev_info *VAR_4, int VAR_5,
       timestamp_t VAR_6, struct progress *VAR_7)
{
 struct connectivity_progress VAR_8;
 struct bitmap_index *VAR_9;





 VAR_4->tag_objects = 1;
 VAR_4->blob_objects = 1;
 VAR_4->tree_objects = 1;


 FUNC_0(VAR_4, 0);


 FUNC_5(VAR_0, VAR_4);


 FUNC_7(VAR_0, VAR_4);
 FUNC_8(VAR_0, VAR_4);


 if (VAR_5)
  FUNC_1(VAR_4, 0);

 VAR_8.progress = VAR_7;
 VAR_8.count = 0;

 VAR_9 = FUNC_9(VAR_4);
 if (VAR_9) {
  FUNC_11(VAR_9, VAR_3);
  FUNC_6(VAR_9);
  return;
 }





 if (FUNC_10(VAR_4))
  FUNC_3("revision walk setup failed");
 FUNC_12(VAR_4, VAR_1, VAR_2, &VAR_8);

 if (VAR_6) {
  VAR_4->ignore_missing_links = 1;
  if (FUNC_2(VAR_4, VAR_6))
   FUNC_3("unable to mark recent objects");
  if (FUNC_10(VAR_4))
   FUNC_3("revision walk setup failed");
  FUNC_12(VAR_4, VAR_1, VAR_2, &VAR_8);
 }

 FUNC_4(VAR_8.progress, VAR_8.count);
}
