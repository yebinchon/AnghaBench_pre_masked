
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct packed_git {int pack_name; } ;
struct bitmap_index {int map_size; int * map; scalar_t__ map_pos; struct packed_git* pack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct bitmap_index*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct packed_git*) ;
 char* FUNC_7 (struct packed_git*) ;
 int FUNC_8 (char*,int ) ;
 int * FUNC_9 (int *,int ,int ,int ,int,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct bitmap_index *VAR_2, struct packed_git *VAR_3)
{
 int VAR_4;
 struct stat VAR_5;
 char *VAR_6;

 if (FUNC_6(VAR_3))
  return -1;

 VAR_6 = FUNC_7(VAR_3);
 VAR_4 = FUNC_3(VAR_6);
 FUNC_1(VAR_6);

 if (VAR_4 < 0)
  return -1;

 if (FUNC_2(VAR_4, &VAR_5)) {
  FUNC_0(VAR_4);
  return -1;
 }

 if (VAR_2->pack) {
  FUNC_8("ignoring extra bitmap file: %s", VAR_3->pack_name);
  FUNC_0(VAR_4);
  return -1;
 }

 VAR_2->pack = VAR_3;
 VAR_2->map_size = FUNC_10(VAR_5.st_size);
 VAR_2->map = FUNC_9(((void*)0), VAR_2->map_size, VAR_1, VAR_0, VAR_4, 0);
 VAR_2->map_pos = 0;
 FUNC_0(VAR_4);

 if (FUNC_4(VAR_2) < 0) {
  FUNC_5(VAR_2->map, VAR_2->map_size);
  VAR_2->map = ((void*)0);
  VAR_2->map_size = 0;
  return -1;
 }

 return 0;
}
