
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int wtimer; int writer_ts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,struct pblk*,char*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct pblk*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pblk *VAR_4)
{
 VAR_4->writer_ts = FUNC_2(VAR_3, VAR_4, "pblk-writer-t");
 if (FUNC_0(VAR_4->writer_ts)) {
  int VAR_5 = FUNC_1(VAR_4->writer_ts);

  if (VAR_5 != -VAR_0)
   FUNC_5(VAR_4, "could not allocate writer kthread (%d)\n",
     VAR_5);
  return VAR_5;
 }

 FUNC_6(&VAR_4->wtimer, VAR_2, 0);
 FUNC_3(&VAR_4->wtimer, VAR_1 + FUNC_4(100));

 return 0;
}
