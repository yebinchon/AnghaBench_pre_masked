
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int dummy; } ;
struct line_header {scalar_t__ version_major; scalar_t__ version_minor; } ;
struct line_emeta {struct line_header header; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pblk*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct pblk*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pblk *VAR_2,
      struct line_emeta *VAR_3)
{
 struct line_header *VAR_4 = &VAR_3->header;

 if (VAR_4->version_major != VAR_0) {
  FUNC_0(VAR_2, "line major version mismatch: %d, expected: %d\n",
    VAR_4->version_major, VAR_0);
  return 1;
 }







 return 0;
}
