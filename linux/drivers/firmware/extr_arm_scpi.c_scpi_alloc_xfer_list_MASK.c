
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_xfer {int node; int done; } ;
struct scpi_chan {int xfers_list; struct scpi_xfer* xfers; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scpi_xfer* FUNC_0 (struct device*,int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct scpi_chan *VAR_4)
{
 int VAR_5;
 struct scpi_xfer *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->xfers = VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_6++) {
  FUNC_1(&VAR_6->done);
  FUNC_2(&VAR_6->node, &VAR_4->xfers_list);
 }

 return 0;
}
