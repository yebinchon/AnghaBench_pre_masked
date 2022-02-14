
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_parse_context {size_t cn_size; size_t o_size; size_t email_size; int cn_offset; int o_offset; int email_offset; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t,int ) ;
 scalar_t__ FUNC_1 (void const*,void const*,int) ;
 int FUNC_2 (char*,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct x509_parse_context *VAR_3, size_t VAR_4,
          unsigned char VAR_5,
          char **VAR_6, size_t VAR_7)
{
 const void *VAR_8, *VAR_9 = (const void *)VAR_3->data;
 size_t VAR_10;
 char *VAR_11;

 if (*VAR_6)
  return -VAR_0;


 if (!VAR_3->cn_size && !VAR_3->o_size && !VAR_3->email_size) {
  VAR_11 = FUNC_0(1, VAR_2);
  if (!VAR_11)
   return -VAR_1;
  VAR_11[0] = 0;
  goto done;
 }

 if (VAR_3->cn_size && VAR_3->o_size) {



  VAR_10 = VAR_3->cn_size;
  VAR_8 = VAR_9 + VAR_3->cn_offset;
  if (VAR_3->cn_size >= VAR_3->o_size &&
      FUNC_1(VAR_9 + VAR_3->cn_offset, VAR_9 + VAR_3->o_offset,
      VAR_3->o_size) == 0)
   goto single_component;
  if (VAR_3->cn_size >= 7 &&
      VAR_3->o_size >= 7 &&
      FUNC_1(VAR_9 + VAR_3->cn_offset, VAR_9 + VAR_3->o_offset, 7) == 0)
   goto single_component;

  VAR_11 = FUNC_0(VAR_3->o_size + 2 + VAR_3->cn_size + 1,
     VAR_2);
  if (!VAR_11)
   return -VAR_1;

  FUNC_2(VAR_11,
         VAR_9 + VAR_3->o_offset, VAR_3->o_size);
  VAR_11[VAR_3->o_size + 0] = ':';
  VAR_11[VAR_3->o_size + 1] = ' ';
  FUNC_2(VAR_11 + VAR_3->o_size + 2,
         VAR_9 + VAR_3->cn_offset, VAR_3->cn_size);
  VAR_11[VAR_3->o_size + 2 + VAR_3->cn_size] = 0;
  goto done;

 } else if (VAR_3->cn_size) {
  VAR_10 = VAR_3->cn_size;
  VAR_8 = VAR_9 + VAR_3->cn_offset;
 } else if (VAR_3->o_size) {
  VAR_10 = VAR_3->o_size;
  VAR_8 = VAR_9 + VAR_3->o_offset;
 } else {
  VAR_10 = VAR_3->email_size;
  VAR_8 = VAR_9 + VAR_3->email_offset;
 }

single_component:
 VAR_11 = FUNC_0(VAR_10 + 1, VAR_2);
 if (!VAR_11)
  return -VAR_1;
 FUNC_2(VAR_11, VAR_8, VAR_10);
 VAR_11[VAR_10] = 0;

done:
 *VAR_6 = VAR_11;
 VAR_3->cn_size = 0;
 VAR_3->o_size = 0;
 VAR_3->email_size = 0;
 return 0;
}
