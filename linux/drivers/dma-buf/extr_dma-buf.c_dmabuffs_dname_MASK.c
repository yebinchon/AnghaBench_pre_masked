
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {int lock; scalar_t__ name; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; struct dma_buf* d_fsdata; } ;


 int VAR_0 ;
 char* FUNC_0 (struct dentry*,char*,int,char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char*,scalar_t__,int) ;

__attribute__((used)) static char *FUNC_4(struct dentry *VAR_1, char *VAR_2, int VAR_3)
{
 struct dma_buf *VAR_4;
 char VAR_5[VAR_0];
 size_t VAR_6 = 0;

 VAR_4 = VAR_1->d_fsdata;
 FUNC_1(&VAR_4->lock);
 if (VAR_4->name)
  VAR_6 = FUNC_3(VAR_5, VAR_4->name, VAR_0);
 FUNC_2(&VAR_4->lock);

 return FUNC_0(VAR_1, VAR_2, VAR_3, "/%s:%s",
        VAR_1->d_name.name, VAR_6 > 0 ? VAR_5 : "");
}
