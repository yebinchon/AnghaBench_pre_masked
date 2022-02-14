
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmfts_data {unsigned long hover_enabled; int mutex; int client; scalar_t__ running; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stmfts_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct stmfts_data *VAR_7 = FUNC_0(VAR_3);
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (FUNC_2(VAR_5, 0, &VAR_8))
  return -VAR_0;

 FUNC_3(&VAR_7->mutex);

 if (VAR_8 & VAR_7->hover_enabled)
  goto out;

 if (VAR_7->running)
  VAR_9 = FUNC_1(VAR_7->client,
        VAR_8 ? VAR_2 :
         VAR_1);

 if (!VAR_9)
  VAR_7->hover_enabled = !!VAR_8;

out:
 FUNC_4(&VAR_7->mutex);

 return VAR_6;
}
