
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct test_header {int th_md5; void* th_length; void* th_offset; void* th_header_length; void* th_magic; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct test_header*,int) ;
 void* FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct test_header *VAR_2, uint32_t VAR_3, uint32_t VAR_4,
  uint32_t VAR_5)
{
 FUNC_1(VAR_2, sizeof(*VAR_2));
 VAR_2->th_magic = FUNC_2(VAR_0);
 VAR_2->th_header_length = FUNC_2(VAR_3);
 VAR_2->th_offset = FUNC_2(VAR_4);
 VAR_2->th_length = FUNC_2(VAR_5);

 FUNC_0(VAR_1, VAR_2->th_md5, VAR_4, VAR_5);
}
