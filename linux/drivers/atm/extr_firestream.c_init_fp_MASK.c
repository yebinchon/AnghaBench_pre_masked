
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_dev {int dummy; } ;
struct freepool {int offset; int bufsize; int nr_buffers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct fs_dev*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct fs_dev *VAR_4, struct freepool *VAR_5, int VAR_6,
     int VAR_7, int VAR_8)
{
 FUNC_6 ();

 FUNC_5 (VAR_0, "Initializing free pool at %x:\n", VAR_6);

 FUNC_8 (VAR_4, FUNC_0(VAR_6), (VAR_7 * VAR_2) | VAR_3 | VAR_1);
 FUNC_8 (VAR_4, FUNC_4(VAR_6), 0);
 FUNC_8 (VAR_4, FUNC_3(VAR_6), 0);
 FUNC_8 (VAR_4, FUNC_2(VAR_6), 0);
 FUNC_8 (VAR_4, FUNC_1(VAR_6), 0);

 VAR_5->offset = VAR_6;
 VAR_5->bufsize = VAR_7;
 VAR_5->nr_buffers = VAR_8;

 FUNC_7 ();
 return 1;
}
