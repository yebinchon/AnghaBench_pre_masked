
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ablkcipher_walk {unsigned int nbytes; int flags; int in; } ;
struct ablkcipher_request {int dummy; } ;
struct ablkcipher_buffer {unsigned int len; void* data; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (void*,unsigned int) ;
 int FUNC_2 (struct ablkcipher_walk*,struct ablkcipher_buffer*) ;
 int FUNC_3 (struct ablkcipher_request*,struct ablkcipher_walk*,int ) ;
 int FUNC_4 () ;
 struct ablkcipher_buffer* FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (void*,int *,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_7(struct ablkcipher_request *VAR_3,
           struct ablkcipher_walk *VAR_4,
           unsigned int VAR_5,
           unsigned int VAR_6,
           void **VAR_7, void **VAR_8)
{
 unsigned VAR_9 = FUNC_0(VAR_5, VAR_6 + 1);
 struct ablkcipher_buffer *VAR_10;
 void *VAR_11, *VAR_12, *VAR_13;
 unsigned int VAR_14;

 VAR_14 = FUNC_0(sizeof(struct ablkcipher_buffer), VAR_6 + 1);
 VAR_14 += (VAR_9 * 3 - (VAR_6 + 1) +
       (VAR_6 & ~(FUNC_4() - 1)));

 VAR_10 = FUNC_5(VAR_14, VAR_2);
 if (!VAR_10)
  return FUNC_3(VAR_3, VAR_4, -VAR_1);

 VAR_13 = VAR_10 + 1;

 VAR_12 = (u8 *)FUNC_0((unsigned long)VAR_13, VAR_6 + 1);
 VAR_11 = VAR_12 = FUNC_1(VAR_12, VAR_5);

 VAR_10->len = VAR_5;
 VAR_10->data = VAR_12;

 FUNC_6(VAR_11, &VAR_4->in, VAR_5, 0);

 FUNC_2(VAR_4, VAR_10);

 VAR_4->nbytes = VAR_5;
 VAR_4->flags |= VAR_0;

 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12;

 return 0;
}
