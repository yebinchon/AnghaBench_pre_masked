
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {unsigned char* index_data; int index_size; int pack_name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(const struct packed_git *VAR_0, const void *VAR_1)
{
 const unsigned char *VAR_2 = VAR_1;
 const unsigned char *VAR_3 = VAR_0->index_data;
 const unsigned char *VAR_4 = VAR_3 + VAR_0->index_size;
 if (VAR_2 < VAR_3)
  FUNC_1(FUNC_0("offset before start of pack index for %s (corrupt index?)"),
      VAR_0->pack_name);

 if (VAR_2 >= VAR_4 - 8)
  FUNC_1(FUNC_0("offset beyond end of pack index for %s (truncated index?)"),
      VAR_0->pack_name);
}
