
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_priv {size_t allocated_size; char* fw_name; size_t size; void* data; } ;
struct device {int dummy; } ;
typedef size_t loff_t ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct device*,char*,char*) ;
 int FUNC_4 (struct device*,char*,char*,int) ;
 int FUNC_5 (struct fw_priv*) ;
 char** VAR_7 ;
 int FUNC_6 (struct fw_priv*) ;
 int FUNC_7 (char*,void**,size_t*,size_t,int) ;
 int FUNC_8 (char*,int,char*,char*,char*,char const*) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static int
FUNC_10(struct device *VAR_8, struct fw_priv *VAR_9,
      const char *VAR_10,
      int (*VAR_11)(struct device *VAR_12,
          struct fw_priv *VAR_13,
          size_t VAR_14,
          const void *VAR_15))
{
 loff_t VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = -VAR_1;
 char *VAR_20;
 enum kernel_read_file_id VAR_21 = VAR_5;
 size_t VAR_22 = VAR_3;
 void *VAR_23 = ((void*)0);


 if (!VAR_11 && VAR_9->data) {
  VAR_23 = VAR_9->data;
  VAR_21 = VAR_6;
  VAR_22 = VAR_9->allocated_size;
 }

 VAR_20 = FUNC_1();
 if (!VAR_20)
  return -VAR_2;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_7); VAR_17++) {

  if (!VAR_7[VAR_17][0])
   continue;

  VAR_18 = FUNC_8(VAR_20, VAR_4, "%s/%s%s",
          VAR_7[VAR_17], VAR_9->fw_name, VAR_10);
  if (VAR_18 >= VAR_4) {
   VAR_19 = -VAR_0;
   break;
  }

  VAR_9->size = 0;
  VAR_19 = FUNC_7(VAR_20, &VAR_23, &VAR_16,
      VAR_22, VAR_21);
  if (VAR_19) {
   if (VAR_19 != -VAR_1)
    FUNC_4(VAR_8, "loading %s failed with error %d\n",
      VAR_20, VAR_19);
   else
    FUNC_3(VAR_8, "loading %s failed for no such file or directory.\n",
      VAR_20);
   continue;
  }
  if (VAR_11) {
   FUNC_3(VAR_8, "f/w decompressing %s\n",
    VAR_9->fw_name);
   VAR_19 = VAR_11(VAR_8, VAR_9, VAR_16, VAR_23);

   FUNC_9(VAR_23);
   VAR_23 = ((void*)0);
   if (VAR_19) {
    FUNC_5(VAR_9);
    continue;
   }
  } else {
   FUNC_3(VAR_8, "direct-loading %s\n",
    VAR_9->fw_name);
   if (!VAR_9->data)
    VAR_9->data = VAR_23;
   VAR_9->size = VAR_16;
  }
  FUNC_6(VAR_9);
  break;
 }
 FUNC_2(VAR_20);

 return VAR_19;
}
