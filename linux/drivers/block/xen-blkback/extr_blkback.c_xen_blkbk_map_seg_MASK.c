
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_req {scalar_t__ operation; int nr_segs; int segments; int ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pending_req *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->ring, VAR_1->segments,
      VAR_1->nr_segs,
                    (VAR_1->operation != VAR_0));

 return VAR_2;
}
