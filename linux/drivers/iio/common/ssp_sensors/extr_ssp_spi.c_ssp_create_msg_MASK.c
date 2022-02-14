
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssp_msg_header {int data; void* options; void* length; int cmd; } ;
struct ssp_msg {int length; int options; void* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ssp_msg*) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (void*,struct ssp_msg_header*,int ) ;

__attribute__((used)) static struct ssp_msg *FUNC_5(u8 VAR_4, u16 VAR_5, u16 VAR_6, u32 VAR_7)
{
 struct ssp_msg_header VAR_8;
 struct ssp_msg *VAR_9;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return ((void*)0);

 VAR_8.cmd = VAR_4;
 VAR_8.length = FUNC_0(VAR_5);
 VAR_8.options = FUNC_0(VAR_6);
 VAR_8.data = FUNC_1(VAR_7);

 VAR_9->buffer = FUNC_3(VAR_3 + VAR_5,
         VAR_1 | VAR_0);
 if (!VAR_9->buffer) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 VAR_9->length = VAR_5;
 VAR_9->options = VAR_6;

 FUNC_4(VAR_9->buffer, &VAR_8, VAR_2);

 return VAR_9;
}
