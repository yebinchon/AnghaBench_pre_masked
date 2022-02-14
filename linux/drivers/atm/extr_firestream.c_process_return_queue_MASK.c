
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int offset; } ;
struct fs_dev {int dummy; } ;
struct FS_QENTRY {long p0; int p2; int p1; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct FS_QENTRY*) ;
 void* FUNC_2 (long) ;
 int FUNC_3 (int ,char*,void*,...) ;
 int FUNC_4 (void*) ;
 long FUNC_5 (struct fs_dev*,int ) ;
 int FUNC_6 (struct fs_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_7 (struct fs_dev *VAR_4, struct queue *VAR_5)
{
 long VAR_6;
 struct FS_QENTRY *VAR_7;
 void *VAR_8;

 while (!((VAR_6 = FUNC_5 (VAR_4, FUNC_0(VAR_5->offset))) & VAR_2)) {
  FUNC_3 (VAR_1, "reaping return queue entry at %lx\n", VAR_6);
  VAR_7 = FUNC_2 (VAR_6);

  FUNC_3 (VAR_1, "queue entry: %08x %08x %08x %08x. (%d)\n",
       VAR_7->cmd, VAR_7->p0, VAR_7->p1, VAR_7->p2, FUNC_1 (VAR_7));

  switch (FUNC_1 (VAR_7)) {
  case 5:
   VAR_8 = FUNC_2 (VAR_7->p0);
   FUNC_3 (VAR_0, "Free tc: %p\n", VAR_8);
   FUNC_4 (VAR_8);
   break;
  }

  FUNC_6 (VAR_4, FUNC_0(VAR_5->offset), VAR_3);
 }
}
