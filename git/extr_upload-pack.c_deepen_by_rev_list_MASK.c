
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_writer {int dummy; } ;
struct object_array {int dummy; } ;
struct commit_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct commit_list*) ;
 struct commit_list* FUNC_2 (int,char const**,int ,int ) ;
 int FUNC_3 (struct packet_writer*,struct commit_list*) ;
 int FUNC_4 (struct packet_writer*,struct object_array*,struct object_array*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct packet_writer *VAR_3, int VAR_4,
          const char **VAR_5,
          struct object_array *VAR_6,
          struct object_array *VAR_7)
{
 struct commit_list *VAR_8;

 FUNC_0(VAR_2);
 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_1, VAR_0);
 FUNC_3(VAR_3, VAR_8);
 FUNC_1(VAR_8);
 FUNC_4(VAR_3, VAR_6, VAR_7);
}
