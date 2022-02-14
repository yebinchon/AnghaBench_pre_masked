
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct upload_pack_data {int writer; TYPE_1__ haves; } ;
struct repository {int dummy; } ;
struct packet_reader {int dummy; } ;
struct object_array {int nr; } ;
struct argv_array {int dummy; } ;
typedef enum fetch_state { ____Placeholder_fetch_state } fetch_state ;


 int VAR_0 ;




 int VAR_1 ;
 struct object_array VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct object_array*,struct object_array*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct object_array*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct packet_reader*,struct upload_pack_data*,struct object_array*) ;
 int FUNC_6 (struct upload_pack_data*,struct object_array*,struct object_array*) ;
 int FUNC_7 (struct upload_pack_data*,struct object_array*) ;
 int FUNC_8 (struct upload_pack_data*) ;
 int VAR_3 ;
 int FUNC_9 (struct upload_pack_data*) ;
 int FUNC_10 (struct upload_pack_data*) ;
 int VAR_4 ;

int FUNC_11(struct repository *VAR_5, struct argv_array *VAR_6,
     struct packet_reader *VAR_7)
{
 enum fetch_state VAR_8 = 130;
 struct upload_pack_data VAR_9;
 struct object_array VAR_10 = VAR_2;
 struct object_array VAR_11 = VAR_2;

 FUNC_0(VAR_0);

 FUNC_2(VAR_3, ((void*)0));

 FUNC_10(&VAR_9);
 VAR_4 = VAR_1;

 while (VAR_8 != 131) {
  switch (VAR_8) {
  case 130:
   FUNC_5(VAR_7, &VAR_9, &VAR_11);

   if (!VAR_11.nr) {




    VAR_8 = 131;
   } else if (VAR_9.haves.nr) {



    VAR_8 = 129;
   } else {




    VAR_8 = 128;
   }
   break;
  case 129:
   if (FUNC_6(&VAR_9, &VAR_10,
       &VAR_11))
    VAR_8 = 128;
   else
    VAR_8 = 131;
   break;
  case 128:
   FUNC_8(&VAR_9);
   FUNC_7(&VAR_9, &VAR_11);

   FUNC_4(&VAR_9.writer, "packfile\n");
   FUNC_1(&VAR_10, &VAR_11);
   VAR_8 = 131;
   break;
  case 131:
   continue;
  }
 }

 FUNC_9(&VAR_9);
 FUNC_3(&VAR_10);
 FUNC_3(&VAR_11);
 return 0;
}
