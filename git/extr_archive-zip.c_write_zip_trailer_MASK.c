
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zip_dir_trailer {int comment_length; int offset; int size; int entries; int entries_on_this_disk; int directory_start_disk; int disk; int magic; } ;
struct object_id {int dummy; } ;
struct TYPE_4__ {int hexsz; } ;
struct TYPE_3__ {int len; struct zip_dir_trailer* buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int*) ;
 struct zip_dir_trailer* FUNC_4 (struct object_id const*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (int,struct zip_dir_trailer*,int) ;
 int FUNC_6 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(const struct object_id *VAR_5)
{
 struct zip_dir_trailer VAR_6;
 int VAR_7 = 0;

 FUNC_2(VAR_6.magic, 0x06054b50);
 FUNC_0(VAR_6.disk, 0);
 FUNC_0(VAR_6.directory_start_disk, 0);
 FUNC_1(VAR_6.entries_on_this_disk, VAR_3,
   &VAR_7);
 FUNC_1(VAR_6.entries, VAR_3, &VAR_7);
 FUNC_2(VAR_6.size, VAR_2.len);
 FUNC_3(VAR_6.offset, VAR_4, &VAR_7);
 FUNC_0(VAR_6.comment_length, VAR_5 ? VAR_1->hexsz : 0);

 FUNC_5(1, VAR_2.buf, VAR_2.len);
 if (VAR_7)
  FUNC_6();
 FUNC_5(1, &VAR_6, VAR_0);
 if (VAR_5)
  FUNC_5(1, FUNC_4(VAR_5), VAR_1->hexsz);
}
