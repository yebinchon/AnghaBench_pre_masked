
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int offset; struct FS_QENTRY* ea; struct FS_QENTRY* sa; } ;
struct fs_dev {int dummy; } ;
struct FS_QENTRY {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct FS_QENTRY* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct FS_QENTRY*) ;
 int FUNC_10 (struct fs_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct fs_dev *VAR_3, struct queue *VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 int VAR_8 = VAR_6 * sizeof (struct FS_QENTRY);
 struct FS_QENTRY *VAR_9;

 FUNC_7 ();

 FUNC_6 (VAR_1, "Initializing queue at %x: %d entries:\n",
      VAR_5, VAR_6);

 VAR_9 = FUNC_5 (VAR_8, VAR_2, 0x10);
 FUNC_6 (VAR_0, "Alloc queue: %p(%d)\n", VAR_9, VAR_8);

 if (!VAR_9) return 0;

 FUNC_10 (VAR_3, FUNC_3(VAR_5), FUNC_9(VAR_9));
 FUNC_10 (VAR_3, FUNC_1(VAR_5), FUNC_9(VAR_9+VAR_6-1));
 FUNC_10 (VAR_3, FUNC_4(VAR_5), FUNC_9(VAR_9));
 FUNC_10 (VAR_3, FUNC_2(VAR_5), FUNC_9(VAR_9));
 if (VAR_7) {



  FUNC_10 (VAR_3, FUNC_0(VAR_5), 0 );
 }

 VAR_4->sa = VAR_9;
 VAR_4->ea = VAR_9;
 VAR_4->offset = VAR_5;

 FUNC_8 ();
 return 1;
}
