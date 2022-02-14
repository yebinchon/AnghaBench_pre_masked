
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int blkno; int len; scalar_t__ offset; } ;
struct mkuz_blk {TYPE_1__ info; int data; } ;
typedef scalar_t__ off_t ;


 struct mkuz_blk* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mkuz_blk*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 struct mkuz_blk* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static struct mkuz_blk *
FUNC_5(int VAR_2, u_int32_t VAR_3)
{
 int VAR_4;
 struct mkuz_blk *VAR_5;
 static int VAR_6;
 off_t VAR_7;

 VAR_5 = FUNC_3(VAR_3);

 VAR_5->info.blkno = VAR_6;
 VAR_6 += 1;
 VAR_7 = FUNC_2(VAR_2, 0, VAR_1);
 if (VAR_7 < 0) {
  FUNC_0(1, "readblock: lseek() failed");

 }
 VAR_5->info.offset = VAR_7;

 VAR_4 = FUNC_4(VAR_2, VAR_5->data, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(1, "readblock: read() failed");

 }
 if (VAR_4 == 0) {
  FUNC_1(VAR_5);
  return VAR_0;
 }
 VAR_5->info.len = VAR_4;
 return VAR_5;
}
