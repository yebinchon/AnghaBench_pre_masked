
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_writer {int dummy; } ;
struct oid_array {int nr; int * oid; } ;
struct object_array {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct object_array const*,struct object_array*) ;
 int FUNC_2 (struct packet_writer*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct packet_writer *VAR_0, struct oid_array *VAR_1,
       const struct object_array *VAR_2,
       struct object_array *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_0, "acknowledgments\n");


 if (!VAR_1->nr)
  FUNC_2(VAR_0, "NAK\n");

 for (VAR_4 = 0; VAR_4 < VAR_1->nr; VAR_4++) {
  FUNC_2(VAR_0, "ACK %s\n",
        FUNC_0(&VAR_1->oid[VAR_4]));
 }

 if (FUNC_1(VAR_2, VAR_3)) {

  FUNC_2(VAR_0, "ready\n");
  return 1;
 }

 return 0;
}
