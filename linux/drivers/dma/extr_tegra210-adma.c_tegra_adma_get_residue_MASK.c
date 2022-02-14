
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_adma_desc {unsigned int num_periods; unsigned int buf_len; unsigned int period_len; } ;
struct tegra_adma_chan {unsigned int tx_buf_pos; unsigned int tx_buf_count; struct tegra_adma_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct tegra_adma_chan*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct tegra_adma_chan *VAR_2)
{
 struct tegra_adma_desc *VAR_3 = VAR_2->desc;
 unsigned int VAR_4 = VAR_1 + 1;
 unsigned int VAR_5 = FUNC_0(VAR_2, VAR_0);
 unsigned int VAR_6;




 if (VAR_5 < VAR_2->tx_buf_pos)
  VAR_2->tx_buf_count += VAR_5 + (VAR_4 - VAR_2->tx_buf_pos);
 else
  VAR_2->tx_buf_count += VAR_5 - VAR_2->tx_buf_pos;

 VAR_6 = VAR_2->tx_buf_count % VAR_3->num_periods;
 VAR_2->tx_buf_pos = VAR_5;

 return VAR_3->buf_len - (VAR_6 * VAR_3->period_len);
}
