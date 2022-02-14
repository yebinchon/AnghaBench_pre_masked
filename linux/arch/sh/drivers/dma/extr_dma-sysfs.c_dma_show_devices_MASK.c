
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_info {char* name; } ;
struct dma_channel {int chan; char* dev_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct dma_channel* FUNC_0 (int) ;
 struct dma_info* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,char*,char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 ssize_t VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  struct dma_info *VAR_5 = FUNC_1(VAR_4);
  struct dma_channel *VAR_6 = FUNC_0(VAR_4);

  if (FUNC_3(!VAR_5) || !VAR_6)
   continue;

  VAR_3 += FUNC_2(VAR_2 + VAR_3, "%2d: %14s    %s\n",
          VAR_6->chan, VAR_5->name,
          VAR_6->dev_id);
 }

 return VAR_3;
}
